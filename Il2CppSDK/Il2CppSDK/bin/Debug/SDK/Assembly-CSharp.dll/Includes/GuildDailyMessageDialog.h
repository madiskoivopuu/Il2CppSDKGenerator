#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildDailyMessageDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildDailyMessageDialog"));
	}

	template <typename R = DailyMessageTypeView*> R& View01() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = DailyMessageTypeView*> R& View02() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = DailyMessageTypeView*> R& View03() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = DailyMessageTypeView*> R& View04() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& MessageField() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& MessageFieldLimit() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StandartButton*> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = StandartButton*> R& SaveButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& ClearColor() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& ErrorColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = DailyMessageTypeView*> R& _selectedType() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC0D8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC658))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC6B4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC8EC))(this);
	}
	template <typename R = void> R OnTypeClicked(uint8_t type) {
		return ((R (*)(GuildDailyMessageDialog*, uint8_t))(Il2CppBase() + 0x12EC9A0))(this, type);
	}
	template <typename R = void> R OnSaveButtonPressed() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECAAC))(this);
	}
	template <typename R = void> R OnMessageFieldValueChanged(Il2CppString* text) {
		return ((R (*)(GuildDailyMessageDialog*, Il2CppString*))(Il2CppBase() + 0x12ECDEC))(this, text);
	}
	template <typename R = DailyMessageTypeView*> R getDailyMessageTypeView(uint8_t type) {
		return ((R (*)(GuildDailyMessageDialog*, uint8_t))(Il2CppBase() + 0x12EC550))(this, type);
	}
	template <typename R = void> R OnEnableb__15_0() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF6C))(this);
	}
	template <typename R = void> R OnEnableb__15_1() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF74))(this);
	}
	template <typename R = void> R OnEnableb__15_2() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF7C))(this);
	}
	template <typename R = void> R OnEnableb__15_3() {
		return ((R (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF84))(this);
	}

};

