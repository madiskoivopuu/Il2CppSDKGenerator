#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveToolData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveToolData"));
	}

	template <typename R = int32_t> R& ActorId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ToolName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& EffectName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RemoveToolData*, uintptr_t))(Il2CppBase() + 0x13A0E18))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RemoveToolData*, uintptr_t))(Il2CppBase() + 0x13A0E7C))(this, reader);
	}

};

