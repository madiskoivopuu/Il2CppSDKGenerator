#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextBubble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextBubble"));
	}

	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& YOffset() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& LifeTime() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& MaxCharacters() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& MaxCharactersInLine() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R Init(Il2CppString* message, Nullable1float>* lifeTime) {
		return ((R (*)(TextBubble*, Il2CppString*, Nullable1float>*))(Il2CppBase() + 0x16B6794))(this, message, lifeTime);
	}

};

