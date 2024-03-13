#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "CheatInfo.h" 

class ButtonCheatInfo : public CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonCheatInfo"));
	}

	template <typename T = Icon*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LocalizationName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1Il2CppString*>*> T& OnClickWithParameter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Func2Il2CppString*, Il2CppString*>*> T& CaptionGetter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Rarity() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = ECheatType*> T get_CheatType() {
		return ((T (*)(ButtonCheatInfo*))(Il2CppBase() + 0x1138F10))(this);
	}
	template <typename T = bool> T Contains(Il2CppString* filter) {
		return ((T (*)(ButtonCheatInfo*, Il2CppString*))(Il2CppBase() + 0x1138F18))(this, filter);
	}

};

