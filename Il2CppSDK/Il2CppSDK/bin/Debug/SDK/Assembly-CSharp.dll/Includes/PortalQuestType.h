#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalQuestType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalQuestType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PortalQuestType*> static T& Middle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PortalQuestType*> static T& Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PortalQuestType*> static T& End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

