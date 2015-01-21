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

#include "dropout_layer_updater_schema.h"

#include "../dropout_layer.h"

#include "dropout_layer_updater_cuda.h"

namespace nnforge
{
	namespace cuda
	{
		dropout_layer_updater_schema::dropout_layer_updater_schema()
		{
		}

		dropout_layer_updater_schema::~dropout_layer_updater_schema()
		{
		}

		layer_updater_schema_smart_ptr dropout_layer_updater_schema::create_specific() const
		{
			return layer_updater_schema_smart_ptr(new dropout_layer_updater_schema());
		}

		const boost::uuids::uuid& dropout_layer_updater_schema::get_uuid() const
		{
			return dropout_layer::layer_guid;
		}

		layer_updater_cuda_smart_ptr dropout_layer_updater_schema::create_updater_specific(
			const layer_configuration_specific& input_configuration_specific,
			const layer_configuration_specific& output_configuration_specific) const
		{
			return layer_updater_cuda_smart_ptr(new dropout_layer_updater_cuda());
		}
	}
}
