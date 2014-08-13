/*
 *  Copyright 2011-2014 Maxim Milakov
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include "../hessian_calculator_factory.h"
#include "plain_running_configuration.h"

namespace nnforge
{
	namespace plain
	{
		class hessian_calculator_plain_factory : public hessian_calculator_factory
		{
		public:
			hessian_calculator_plain_factory(plain_running_configuration_const_smart_ptr opencl_config);

			virtual ~hessian_calculator_plain_factory();

			virtual hessian_calculator_smart_ptr create(network_schema_smart_ptr schema) const;

		protected:
			plain_running_configuration_const_smart_ptr plain_config;
		};
	}
}
