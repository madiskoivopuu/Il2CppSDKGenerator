#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HelpshiftExample {

class ProactiveConfigCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HelpshiftExample", "ProactiveConfigCollector"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> T getLocalApiConfig() {
		return ((T (*)(ProactiveConfigCollector*))(Il2CppBase() + 0x16E4324))(this);
	}

};

}
