#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class IHelpshiftProactiveAPIConfigCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "IHelpshiftProactiveAPIConfigCollector"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T getLocalApiConfig() {
		return ((T (*)(IHelpshiftProactiveAPIConfigCollector*))(Il2CppBase() + 0x0))(this);
	}

};

}
