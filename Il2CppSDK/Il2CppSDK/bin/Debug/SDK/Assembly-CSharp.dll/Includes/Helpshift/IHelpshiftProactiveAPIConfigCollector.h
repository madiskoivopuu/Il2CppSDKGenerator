#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class IHelpshiftProactiveAPIConfigCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "IHelpshiftProactiveAPIConfigCollector"));
	}


	 Il2CppDictionary<Il2CppString*, Il2CppObject*>* getLocalApiConfig() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(IHelpshiftProactiveAPIConfigCollector*))(Il2CppBase() + 0x0))(this);
	}

};

}
