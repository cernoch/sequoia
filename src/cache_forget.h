/*
 * This file is part of the Sequoia MSO Solver.
 * 
 * Copyright 2012 Alexander Langer, Theoretical Computer Science,
 *                                  RWTH Aachen University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 * @author Alexander Langer
 */
#ifndef SEQUOIA_CACHE_FORGET_H
#define	SEQUOIA_CACHE_FORGET_H

#include "cache_apply_game.h"
#include "game.h"
#include "logic/assignment.h"

namespace sequoia {

typedef MCGame_f CacheForgetValue;

extern void
cache_forget_store(const Formula *formula, const Assignment_f *alpha,
                   const MCGame_f *game, const ConstantSymbol *sym,
                   const CacheForgetValue *result);

extern const CacheForgetValue*
cache_forget_lookup(const Formula *formula, const Assignment_f *alpha,
                    const MCGame_f *game, const ConstantSymbol *sym);

extern void
cache_forget_resize(size_t cache_size);

} // namespace

#endif	/* SEQUOIA_CACHE_FORGET_H */

