/*
 *  Copyright 2011-2013 Maxim Milakov
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

#include "cuda_linear_buffer.h"

namespace nnforge
{
	namespace cuda
	{
		cuda_linear_buffer::cuda_linear_buffer()
		{
		}

		cuda_linear_buffer::~cuda_linear_buffer()
		{
		}

		cuda_linear_buffer::operator void *()
		{
			return get_buf();
		}

		cuda_linear_buffer::operator const void *() const
		{
			return get_buf();
		}

		cuda_linear_buffer::operator float *()
		{
			return (float *)(get_buf());
		}

		cuda_linear_buffer::operator const float *() const
		{
			return (float *)(get_buf());
		}

		cuda_linear_buffer::operator double *()
		{
			return (double *)(get_buf());
		}

		cuda_linear_buffer::operator const double *() const
		{
			return (double *)(get_buf());
		}

		cuda_linear_buffer::operator float2 *()
		{
			return (float2 *)(get_buf());
		}

		cuda_linear_buffer::operator const float2 *() const
		{
			return (float2 *)(get_buf());
		}

		cuda_linear_buffer::operator float4 *()
		{
			return (float4 *)(get_buf());
		}

		cuda_linear_buffer::operator const float4 *() const
		{
			return (float4 *)(get_buf());
		}

		cuda_linear_buffer::operator unsigned char *()
		{
			return (unsigned char *)(get_buf());
		}

		cuda_linear_buffer::operator const unsigned char *() const
		{
			return (unsigned char *)(get_buf());
		}

		cuda_linear_buffer::operator uchar4 *()
		{
			return (uchar4 *)(get_buf());
		}

		cuda_linear_buffer::operator const uchar4 *() const
		{
			return (uchar4 *)(get_buf());
		}

		cuda_linear_buffer::operator unsigned int *()
		{
			return (unsigned int *)(get_buf());
		}

		cuda_linear_buffer::operator const unsigned int *() const
		{
			return (unsigned int *)(get_buf());
		}

		cuda_linear_buffer::operator int *()
		{
			return (int *)(get_buf());
		}

		cuda_linear_buffer::operator const int *() const
		{
			return (int *)(get_buf());
		}
	}
}
