#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyMagicComponent"));
	}

	template <typename R = bool> R& IgnoreActorParent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = MagicSource*> R& MagicSource() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& RandomCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseApplyMagicComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC048))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0xFBC11C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0xFBC290))(this, writer);
	}

};

