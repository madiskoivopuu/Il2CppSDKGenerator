#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildDailyMessageDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildDailyMessageDialog"));
	}

	template <typename T = DailyMessageTypeView*> T& View01() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = DailyMessageTypeView*> T& View02() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = DailyMessageTypeView*> T& View03() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = DailyMessageTypeView*> T& View04() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MessageField() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MessageFieldLimit() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = StandartButton*> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = StandartButton*> T& SaveButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ClearColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ErrorColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = DailyMessageTypeView*> T& _selectedType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC0D8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC658))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC6B4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12EC8EC))(this);
	}
	template <typename T = void> T OnTypeClicked(uint8_t type) {
		return ((T (*)(GuildDailyMessageDialog*, uint8_t))(Il2CppBase() + 0x12EC9A0))(this, type);
	}
	template <typename T = void> T OnSaveButtonPressed() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECAAC))(this);
	}
	template <typename T = void> T OnMessageFieldValueChanged(Il2CppString* text) {
		return ((T (*)(GuildDailyMessageDialog*, Il2CppString*))(Il2CppBase() + 0x12ECDEC))(this, text);
	}
	template <typename T = DailyMessageTypeView*> T getDailyMessageTypeView(uint8_t type) {
		return ((T (*)(GuildDailyMessageDialog*, uint8_t))(Il2CppBase() + 0x12EC550))(this, type);
	}
	template <typename T = void> T OnEnableb__15_0() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF6C))(this);
	}
	template <typename T = void> T OnEnableb__15_1() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF74))(this);
	}
	template <typename T = void> T OnEnableb__15_2() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF7C))(this);
	}
	template <typename T = void> T OnEnableb__15_3() {
		return ((T (*)(GuildDailyMessageDialog*))(Il2CppBase() + 0x12ECF84))(this);
	}

};

