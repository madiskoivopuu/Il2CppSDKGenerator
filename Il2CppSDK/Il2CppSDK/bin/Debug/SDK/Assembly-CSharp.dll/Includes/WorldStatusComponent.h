#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent1.h" 

class WorldStatusComponent : public TypeTypeComponent1<WorldStatusType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldStatusComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WorldStatusComponent*, uintptr_t))(Il2CppBase() + 0x1131228))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WorldStatusComponent*, uintptr_t))(Il2CppBase() + 0x11312A4))(this, writer);
	}

};

