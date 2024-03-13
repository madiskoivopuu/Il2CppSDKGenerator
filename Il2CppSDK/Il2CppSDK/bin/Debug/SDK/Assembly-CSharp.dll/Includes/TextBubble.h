#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextBubble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextBubble"));
	}

	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& YOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MaxCharacters() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MaxCharactersInLine() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Init(Il2CppString* message, Nullable1float>* lifeTime) {
		return ((T (*)(TextBubble*, Il2CppString*, Nullable1float>*))(Il2CppBase() + 0x16B6794))(this, message, lifeTime);
	}

};

