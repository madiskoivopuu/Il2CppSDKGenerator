#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityLinkId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityLinkId"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
