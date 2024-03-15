#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidProactiveCollectorListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidProactiveCollectorListener"));
	}

	template <typename R = Helpshift::IHelpshiftProactiveAPIConfigCollector*> R& externalHelpshiftEventsListener() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R getApiConfigString() {
		return ((R (*)(HelpshiftAndroidProactiveCollectorListener*))(Il2CppBase() + 0x128E078))(this);
	}

};

}
