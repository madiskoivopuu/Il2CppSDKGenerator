#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidProactiveCollectorListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidProactiveCollectorListener"));
	}

	template <typename T = uintptr_t> T& externalHelpshiftEventsListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T getApiConfigString() {
		return ((T (*)(HelpshiftAndroidProactiveCollectorListener*))(Il2CppBase() + 0x128E078))(this);
	}

};

}
