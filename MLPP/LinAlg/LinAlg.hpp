//
//  LinAlg.hpp
//
//  Created by Marc Melikyan on 1/8/21.
//

#ifndef LinAlg_hpp
#define LinAlg_hpp

#include <vector>
#include <tuple>

namespace MLPP{
    class LinAlg{
        public:
        
        // MATRIX FUNCTIONS

        std::vector<std::vector<double>> addition(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);

        std::vector<std::vector<double>> subtraction(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);
        
        std::vector<std::vector<double>> matmult(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);
        
        std::vector<std::vector<double>> hadamard_product(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);

        std::vector<std::vector<double>> kronecker_product(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);

        std::vector<std::vector<double>> elementWiseDivision(std::vector<std::vector<double>> A, std::vector<std::vector<double>> B);
        
        std::vector<std::vector<double>> transpose(std::vector<std::vector<double>> A);
        
        std::vector<std::vector<double>> scalarMultiply(double scalar, std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> scalarAdd(double scalar, std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> log(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> log10(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> exp(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> erf(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> exponentiate(std::vector<std::vector<double>> A, double p);
        
        double det(std::vector<std::vector<double>> A, int d);
        
        std::vector<std::vector<double>> cofactor(std::vector<std::vector<double>> A, int n, int i, int j);
        
        std::vector<std::vector<double>> adjoint(std::vector<std::vector<double>> A);
        
        std::vector<std::vector<double>> inverse(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> pinverse(std::vector<std::vector<double>> A);

        std::vector<std::vector<double>> zeromat(int n, int m);

        std::vector<std::vector<double>> onemat(int n, int m);

        std::vector<std::vector<double>> round(std::vector<std::vector<double>> A);
        
        std::vector<std::vector<double>> identity(double d);

        std::vector<std::vector<double>> cov(std::vector<std::vector<double>> A);

        std::tuple<std::vector<std::vector<double>>, std::vector<std::vector<double>>> eig(std::vector<std::vector<double>> A);

        std::tuple<std::vector<std::vector<double>>, std::vector<std::vector<double>>, std::vector<std::vector<double>>> SVD(std::vector<std::vector<double>> A);

        double sum_elements(std::vector<std::vector<double>> A);

        std::vector<double> flatten(std::vector<std::vector<double>> A);
        
        void printMatrix(std::vector<std::vector<double>> A);
        
        // VECTOR FUNCTIONS

        std::vector<std::vector<double>> vecmult(std::vector<double> a, std::vector<double> b); // This multiplies a, bT 
        
        std::vector<double> hadamard_product(std::vector<double> a, std::vector<double> b);

        std::vector<double> elementWiseDivision(std::vector<double> a, std::vector<double> b);
        
        std::vector<double> scalarMultiply(double scalar, std::vector<double> a);

        std::vector<double> scalarAdd(double scalar, std::vector<double> a);
        
        std::vector<double> addition(std::vector<double> a, std::vector<double> b);
        
        std::vector<double> subtraction(std::vector<double> a, std::vector<double> b);

        std::vector<double> subtractMatrixRows(std::vector<double> a, std::vector<std::vector<double>> B);

        std::vector<double> log(std::vector<double> a);

        std::vector<double> log10(std::vector<double> a);

        std::vector<double> exp(std::vector<double> a);

        std::vector<double> erf(std::vector<double> a);
        
        double dot(std::vector<double> a, std::vector<double> b);

        std::vector<double> onevec(int n);

        double max(std::vector<double> a);

        double min(std::vector<double> a);

        std::vector<double> round(std::vector<double> a);
        
        double norm_sq(std::vector<double> a);
        
        double sum_elements(std::vector<double> a);

        double cosineSimilarity(std::vector<double> a, std::vector<double> b);
        
        void printVector(std::vector<double> a);
        
        // MATRIX-VECTOR FUNCTIONS
        std::vector<std::vector<double>> mat_vec_add(std::vector<std::vector<double>> A, std::vector<double> b);

        std::vector<double> mat_vec_mult(std::vector<std::vector<double>> A, std::vector<double> b);

        // TENSOR FUNCTIONS
        std::vector<double> flatten(std::vector<std::vector<std::vector<double>>> A);
        void printTensor(std::vector<std::vector<std::vector<double>>> A);

        
        private:
    };

}

#endif /* LinAlg_hpp */