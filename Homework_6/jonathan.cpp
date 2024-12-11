#include <pybind11/pybind11.h>
#include <pybind11/stl.h> // Para la integración de STL
#include <vector>
#include <map>

namespace py = pybind11;

// Definir el módulo y las funciones a exportar
PYBIND11_MODULE(stl_bindings, m) {
    m.def("imprimir", []() {
        return "Hola, mi nombre el Jonathan Lagos";
    });
}