#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Button
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Button"));
	}

	template <typename R = Il2CppString*> R& Dialogue() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Title() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Label() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ButtonType> R& Type() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& EnableCondition() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& OnClickCondition() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& DropNextButtons() {
		return *(R*)((uintptr_t)this + 0x50);
	}


};

