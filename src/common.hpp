//
// Created by jianping on 17-8-31.
//

#ifndef DEPTHPROBABILITY_COMMON_HPP
#define DEPTHPROBABILITY_COMMON_HPP

#include <Eigen/Dense>
#include <boost/python.hpp>


namespace common{
    boost::python::list RandomGaussion(unsigned int n);
}

BOOST_PYTHON_MODULE(libdepthProb)
{
    boost::python::def("RandomGaussion", common::RandomGaussion);
}

#endif //DEPTHPROBABILITY_COMMON_HPP