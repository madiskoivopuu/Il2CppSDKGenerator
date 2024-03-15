#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class GridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "GridCell"));
	}

	template <typename R = AdvancedCheats::ButtonCheatView*> R& buttonCheatView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AdvancedCheats::ToggleCheatView*> R& toggleCheatView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = AdvancedCheats::CheatView*> R& view() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize(CheatInfo* cheatInfo) {
		return ((R (*)(GridCell*, CheatInfo*))(Il2CppBase() + 0x12E2E84))(this, cheatInfo);
	}
	template <typename R = void> R Deinitialize() {
		return ((R (*)(GridCell*))(Il2CppBase() + 0x12E32AC))(this);
	}
	template <typename R = AdvancedCheats::ButtonCheatView*> R CreateButtonCheat(AdvancedCheats::ButtonCheatView* prefab, uintptr_t root, ButtonCheatInfo* info) {
		return ((R (*)(GridCell*, AdvancedCheats::ButtonCheatView*, uintptr_t, ButtonCheatInfo*))(Il2CppBase() + 0x12E2FC0))(this, prefab, root, info);
	}
	template <typename R = AdvancedCheats::ToggleCheatView*> R CreateToggleCheat(AdvancedCheats::ToggleCheatView* prefab, uintptr_t root, ToggleCheatInfo* info) {
		return ((R (*)(GridCell*, AdvancedCheats::ToggleCheatView*, uintptr_t, ToggleCheatInfo*))(Il2CppBase() + 0x12E3144))(this, prefab, root, info);
	}

};

}
