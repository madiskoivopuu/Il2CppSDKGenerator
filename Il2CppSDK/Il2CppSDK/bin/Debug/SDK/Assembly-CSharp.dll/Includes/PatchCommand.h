#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatchCommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommand"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Params() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PatchCommand*, uintptr_t))(Il2CppBase() + 0x11E9838))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PatchCommand*, uintptr_t))(Il2CppBase() + 0x11E98D4))(this, writer);
	}

};

