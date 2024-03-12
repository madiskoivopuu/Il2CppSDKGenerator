#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class GridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "GridCell"));
	}

	template <typename T = uintptr_t> T& buttonCheatView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& toggleCheatView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize(uintptr_t cheatInfo) {
		return ((T (*)(GridCell*, uintptr_t))(Il2CppBase() + 0x12E2E84))(this, cheatInfo);
	}
	template <typename T = void> T Deinitialize() {
		return ((T (*)(GridCell*))(Il2CppBase() + 0x12E32AC))(this);
	}
	template <typename T = uintptr_t> T CreateButtonCheat(uintptr_t prefab, uintptr_t root, uintptr_t info) {
		return ((T (*)(GridCell*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12E2FC0))(this, prefab, root, info);
	}
	template <typename T = uintptr_t> T CreateToggleCheat(uintptr_t prefab, uintptr_t root, uintptr_t info) {
		return ((T (*)(GridCell*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12E3144))(this, prefab, root, info);
	}

};

}
