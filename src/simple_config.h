/*
 * simple_config.h
 *
 *  Created on: 2019-05-06
 *      Author:sunbin 
 */

#ifndef SIMPLE_CONFIG_H_
#define SIMPLE_CONFIG_H_

#include <string>
#include <map>

int get_config_map(const char *config_file, std::map<std::string, std::string> &configs);

#endif /* SIMPLE_CONFIG_H_ */
