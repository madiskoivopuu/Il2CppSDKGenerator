#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionItemForMessage"));
	}

	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Bind(Il2CppString* caption, Il2CppString* descriprion) {
		return ((R (*)(DescriptionItemForMessage*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEBA434))(this, caption, descriprion);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(DescriptionItemForMessage*, bool))(Il2CppBase() + 0xEBA488))(this, isActive);
	}

};

