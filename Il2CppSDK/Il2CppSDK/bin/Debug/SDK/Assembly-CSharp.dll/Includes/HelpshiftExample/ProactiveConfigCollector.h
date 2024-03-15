#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class ProactiveConfigCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "ProactiveConfigCollector"));
	}


	 Il2CppDictionary<Il2CppString*, Il2CppObject*>* getLocalApiConfig() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(ProactiveConfigCollector*))(Il2CppBase() + 0x16E4324))(this);
	}

};

}
