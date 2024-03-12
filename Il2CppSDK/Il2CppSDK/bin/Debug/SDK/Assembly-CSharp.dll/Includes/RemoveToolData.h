#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveToolData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveToolData"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ToolName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RemoveToolData*, uintptr_t))(Il2CppBase() + 0x13A0E18))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RemoveToolData*, uintptr_t))(Il2CppBase() + 0x13A0E7C))(this, reader);
	}

};

}
