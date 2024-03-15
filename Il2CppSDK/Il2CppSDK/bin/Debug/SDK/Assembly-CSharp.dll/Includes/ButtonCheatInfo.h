#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonCheatInfo : public CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonCheatInfo"));
	}

	template <typename R = Icon> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& LocalizationName() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& OnClick() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Action1<Il2CppString*>*& OnClickWithParameter() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x50);
	}
	 Func2<Il2CppString*, Il2CppString*>*& CaptionGetter() {
		return *(Func2<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& Rarity() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = ECheatType> R get_CheatType() {
		return ((R (*)(ButtonCheatInfo*))(Il2CppBase() + 0x1138F10))(this);
	}
	template <typename R = bool> R Contains(Il2CppString* filter) {
		return ((R (*)(ButtonCheatInfo*, Il2CppString*))(Il2CppBase() + 0x1138F18))(this, filter);
	}

};

