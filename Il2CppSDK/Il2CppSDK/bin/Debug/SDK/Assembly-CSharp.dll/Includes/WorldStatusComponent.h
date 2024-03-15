#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent1.h" 

class WorldStatusComponent : public TypeTypeComponent1<ProtoModels::WorldStatusType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldStatusComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WorldStatusComponent*, uintptr_t))(Il2CppBase() + 0x1131228))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WorldStatusComponent*, uintptr_t))(Il2CppBase() + 0x11312A4))(this, writer);
	}

};

