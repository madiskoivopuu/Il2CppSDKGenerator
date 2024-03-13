#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class GridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "GridCell"));
	}

	template <typename T = ButtonCheatView*> T& buttonCheatView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ToggleCheatView*> T& toggleCheatView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = CheatView*> T& view() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize(CheatInfo* cheatInfo) {
		return ((T (*)(GridCell*, CheatInfo*))(Il2CppBase() + 0x12E2E84))(this, cheatInfo);
	}
	template <typename T = void> T Deinitialize() {
		return ((T (*)(GridCell*))(Il2CppBase() + 0x12E32AC))(this);
	}
	template <typename T = ButtonCheatView*> T CreateButtonCheat(ButtonCheatView* prefab, uintptr_t root, ButtonCheatInfo* info) {
		return ((T (*)(GridCell*, ButtonCheatView*, uintptr_t, ButtonCheatInfo*))(Il2CppBase() + 0x12E2FC0))(this, prefab, root, info);
	}
	template <typename T = ToggleCheatView*> T CreateToggleCheat(ToggleCheatView* prefab, uintptr_t root, ToggleCheatInfo* info) {
		return ((T (*)(GridCell*, ToggleCheatView*, uintptr_t, ToggleCheatInfo*))(Il2CppBase() + 0x12E3144))(this, prefab, root, info);
	}

};

}
