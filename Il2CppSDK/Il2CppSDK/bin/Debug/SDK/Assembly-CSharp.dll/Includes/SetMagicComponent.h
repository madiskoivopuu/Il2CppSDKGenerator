#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetMagicComponent"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& CountParamText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SetMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1624640))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetMagicComponent*, uintptr_t))(Il2CppBase() + 0x16246F8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetMagicComponent*, uintptr_t))(Il2CppBase() + 0x16247D8))(this, writer);
	}

};

