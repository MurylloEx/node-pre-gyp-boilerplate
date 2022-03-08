import { resolve, join } from 'path';

const binary = require('@mapbox/node-pre-gyp');
const packagePath = resolve(join(__dirname, '../package.json'));
const modulePath = binary.find(packagePath);
const nativeModule = require(modulePath);

export function sayHelloWorld(): string {
  return nativeModule.sayHelloWorld();
}

export function sayMyName(): string {
  return nativeModule.sayMyName();
}
