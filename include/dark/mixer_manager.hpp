/*
 * Copyright (c) 2013-2015 John Connor (BM-NC49AxAjcqVcF5jNPu85Rb8MJ2d9JqZt)
 *
 * This file is part of Dark++.
 *
 * Dark++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DARK_MIXER_MANAGER_HPP
#define DARK_MIXER_MANAGER_HPP

namespace dark {

    class stack_impl;
    
    /**
     * Implements a mixer manager.
     */
    class mixer_manager
    {
        public:
        
            /**
             * Constructor
             * @param owner The stack_impl.
             */
            explicit mixer_manager(stack_impl & owner);
        
            /**
             * Starts
             */
            void start();
        
            /**
             * Stops
             */
            void stop();
        
        private:
        
            // ...
        
        protected:
        
            /**
             * The stack_impl.
             */
            stack_impl & stack_impl_;
    };
    
} // namespace dark

#endif // DARK_MIXER_MANAGER_HPP
