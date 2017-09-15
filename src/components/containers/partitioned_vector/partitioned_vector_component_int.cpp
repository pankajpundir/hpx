//  Copyright (c) 2017 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/config.hpp>

#include <hpx/components/containers/container_distribution_policy.hpp>
#include <hpx/components/containers/partitioned_vector/export_definitions.hpp>
#include <hpx/components/containers/partitioned_vector/partitioned_vector_component.hpp>
#include <hpx/components/containers/partitioned_vector/partitioned_vector.hpp>

#include <vector>

HPX_REGISTER_PARTITIONED_VECTOR(int);

template class HPX_PARTITIONED_VECTOR_EXPORT
    hpx::server::partitioned_vector<int, std::vector<int>>;
template class HPX_PARTITIONED_VECTOR_EXPORT
    hpx::partitioned_vector_partition<int, std::vector<int>>;
template class HPX_PARTITIONED_VECTOR_EXPORT
    hpx::partitioned_vector<int, std::vector<int>>;
template HPX_PARTITIONED_VECTOR_EXPORT
    hpx::partitioned_vector<int, std::vector<int>>::partitioned_vector(
        size_type, hpx::container_distribution_policy const&);
template HPX_PARTITIONED_VECTOR_EXPORT
    hpx::partitioned_vector<int, std::vector<int>>::partitioned_vector(
        size_type, int const&, hpx::container_distribution_policy const&);

