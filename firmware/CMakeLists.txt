# SPDX-FileCopyrightText: 2022 Rafael G. Martins <rafael@rafaelmartins.eng.br>
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.12)

include(./cmake/avr.cmake)

project(ghost-julialabs C)

add_executable(ghost-julialabs
    main.c
)

target_compile_options(ghost-julialabs PRIVATE
    -Wall
    -Wextra
    -Werror
)

avr_target_set_device(ghost-julialabs attiny85 8000000UL)
avr_target_show_size(ghost-julialabs attiny85)
avr_target_gen_map(ghost-julialabs)
avr_target_generate_hex(ghost-julialabs)
avr_target_generate_fuse_hex(ghost-julialabs)
