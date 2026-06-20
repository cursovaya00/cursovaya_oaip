#pragma once
using namespace System;
using namespace System::Collections::Generic;
#include "FileManager.h"
namespace curs {

	public ref class GraphElement abstract {
	public:
		virtual String^ ToString() override = 0;
	};
	public ref class Vertex : public GraphElement {
	public:
		String^ Name;
		int X, Y;
		bool IsVisited;
		Vertex(String^ name, int x, int y) : Name(name), X(x), Y(y) { IsVisited = 0; }
		String^ ToString() override { return Name + " (" + X + ", " + Y + ")"; }
	};

	public ref class Edge : public GraphElement {
	public:
		int FromIndex, ToIndex;
		Edge(int fromInd, int toInd) : FromIndex(fromInd), ToIndex(toInd) {}
		String^ ToString() override { return "V" + (FromIndex + 1).ToString() + " - V" + (ToIndex + 1).ToString(); }
	};

	public ref class Graph {
	public:
		List<Vertex^>^ Vertices;
		List<Edge^>^ Edges;
		Graph() {
			Vertices = gcnew List<Vertex^>();
			Edges = gcnew List<Edge^>();
		}
		void AddVertex(String^ name, int x, int y) {
			Vertices->Add(gcnew Vertex(name, x, y));
		}
		bool AddEdge(int fromIndex, int toIndex) {
			if (fromIndex < 0 || fromIndex >= Vertices->Count)  return false;
			if (toIndex < 0 || toIndex >= Vertices->Count) return false;
			if (fromIndex == toIndex) return false;
			for (int i = 0;i < Edges->Count;i++) {
				if ((Edges[i]->FromIndex == fromIndex && Edges[i]->ToIndex == toIndex) || (Edges[i]->FromIndex == toIndex && Edges[i]->ToIndex == fromIndex)) { return false; }
			}
			Edges->Add(gcnew Edge(fromIndex, toIndex));
			return true;
		}
		int FindVertexIndex(String^ name) {
			for (int i = 0;i < Vertices->Count;i++) {
				if (Vertices[i]->Name == name) {
					return i;
				}
			}
			return -1;
		}
		bool RemoveVertex(int index) {
			if (index < 0 || index >= Vertices->Count) { return false; }
			Vertices->RemoveAt(index);
			for (int i = Edges->Count - 1;i >= 0;i--) {
				if (Edges[i]->FromIndex == index || Edges[i]->ToIndex == index) { Edges->RemoveAt(i); }
				else {
					if (Edges[i]->FromIndex > index) Edges[i]->FromIndex--;
					if (Edges[i]->ToIndex > index) Edges[i]->ToIndex--;
				}
			}
			return true;
		}
		void ClearVisited() {
			for (int i = 0;i < Vertices->Count;i++) {
				Vertices[i]->IsVisited = 0;
			}
		}
		List<int>^ DFS(int startIND) {
			List<int>^ result = gcnew List<int>();
			if (startIND < 0 || startIND >= Vertices->Count) { return result; }
			ClearVisited();
			DFSRecursive(startIND, result);
			return result;
		}
	private:
		void DFSRecursive(int current, List<int>^ order) {
			Vertices[current]->IsVisited = true;
			order->Add(current);
			for (int i = 0;i < Edges->Count;i++) {
				int neighbor = -1;
				if (Edges[i]->FromIndex == current)neighbor = Edges[i]->ToIndex;
				if (Edges[i]->ToIndex == current) neighbor = Edges[i]->FromIndex;
				if (neighbor >= 0 && Vertices[neighbor]->IsVisited == false) DFSRecursive(neighbor, order);
			}
		}
	};
}