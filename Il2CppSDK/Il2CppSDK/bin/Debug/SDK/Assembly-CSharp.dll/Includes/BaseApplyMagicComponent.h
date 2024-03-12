#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyMagicComponent"));
	}

	template <typename T = bool> T& IgnoreActorParent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MagicSource() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& RandomCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BaseApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0xFBC048))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0xFBC11C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0xFBC290))(this, writer);
	}

};

}
