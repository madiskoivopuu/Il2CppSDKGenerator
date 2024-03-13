#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionItemForMessage"));
	}

	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Bind(Il2CppString* caption, Il2CppString* descriprion) {
		return ((T (*)(DescriptionItemForMessage*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEBA434))(this, caption, descriprion);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(DescriptionItemForMessage*, bool))(Il2CppBase() + 0xEBA488))(this, isActive);
	}

};

