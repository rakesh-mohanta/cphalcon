/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          Vladimir Kolesnikov <vladimir@extrememember.com>              |
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_INTERNED_STRINGS_H
#define PHALCON_INTERNED_STRINGS_H

#include "main/php.h"

extern const char *phalcon_interned_all;
extern const char *phalcon_interned_arguments;
extern const char *phalcon_interned_balias;
extern const char *phalcon_interned_binary_op;
extern const char *phalcon_interned_column;
extern const char *phalcon_interned_columns;
extern const char *phalcon_interned_conditions;
extern const char *phalcon_interned_distinct;
extern const char *phalcon_interned_domain;
extern const char *phalcon_interned_expr;
extern const char *phalcon_interned_fields;
extern const char *phalcon_interned_functionCall;
extern const char *phalcon_interned_group;
extern const char *phalcon_interned_having;
extern const char *phalcon_interned_joins;
extern const char *phalcon_interned_left;
extern const char *phalcon_interned_limit;
extern const char *phalcon_interned_model;
extern const char *phalcon_interned_models;
extern const char *phalcon_interned_modelsCache;
extern const char *phalcon_interned_modelsManager;
extern const char *phalcon_interned_modelsMetadata;
extern const char *phalcon_interned_name;
extern const char *phalcon_interned_number;
extern const char *phalcon_interned_offset;
extern const char *phalcon_interned_op;
extern const char *phalcon_interned_order;
extern const char *phalcon_interned_qualified;
extern const char *phalcon_interned_right;
extern const char *phalcon_interned_source;
extern const char *phalcon_interned_sqlAlias;
extern const char *phalcon_interned_table;
extern const char *phalcon_interned_tables;
extern const char *phalcon_interned_type;
extern const char *phalcon_interned_value;
extern const char *phalcon_interned_values;
extern const char *phalcon_interned_where;

void phalcon_init_interned_strings(TSRMLS_D);

#endif /* PHALCON_INTERNED_STRINGS_H */
