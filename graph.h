#ifndef GRAPH_H
#define GRAPH_H

// Necessary headers
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <queue>
#include <vector>
#include "heap.h"
#include "pair.cpp"
#include "vector.h"

// Type definitions
typedef std::vector<std::vector<std::pair<int, int>>> AdjacencyType;

// Graph class
class Graph {

// Member Variables
private:
    std::string filename;

    std::vector<std::string> cities;
    AdjacencyType adjacencyList;

// Constructors
public:
    Graph() = default;
    explicit Graph(const std::string& _filename);

// Member functions
public:
    void initialize(const std::string& _filename);
    std::vector<std::string> getShortestPath(std::string firstCity, std::string secondCity);

private:
    void initialize();

// Getters and Setters
public:
    [[nodiscard]] int getNumberOfCities() const;

// Helpers
private:
    static std::vector<std::string> splitLine(const std::string &line);
    static std::string toLowerCase(std::string str);
    int getCityIndex(const std::string &city) const;
    void dijkstra(int start, std::vector<int> &distances, std::vector<int> &previous) const;


};

#endif // GRAPH_H