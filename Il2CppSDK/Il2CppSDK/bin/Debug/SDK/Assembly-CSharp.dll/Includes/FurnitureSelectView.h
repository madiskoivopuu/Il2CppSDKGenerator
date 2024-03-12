#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FurnitureSelectView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FurnitureSelectView"));
	}

	template <typename T = uintptr_t> T& MoveButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RotateButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TakeButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DisassembleButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& WarningPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnStartMoveFurniture() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _builderWindow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _selectedEntity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _serviceDownTitleKey() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _cantMoveKey() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _cantPutKey() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _cantDisassembleKey() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T add_OnStartMoveFurniture(uintptr_t value) {
		return ((T (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF3D8))(this, value);
	}
	template <typename T = void> T remove_OnStartMoveFurniture(uintptr_t value) {
		return ((T (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF478))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x15FF518))(this);
	}
	template <typename T = void> T Init(uintptr_t builderWindow) {
		return ((T (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF6A4))(this, builderWindow);
	}
	template <typename T = void> T Show(uintptr_t selectedEntity) {
		return ((T (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF6AC))(this, selectedEntity);
	}
	template <typename T = void> T TakeFurniture() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x15FF8D8))(this);
	}
	template <typename T = void> T DisassembleFurniture() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x160021C))(this);
	}
	template <typename T = void> T MoveFurniture() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x1600C84))(this);
	}
	template <typename T = void> T RotateFurniture() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x1601150))(this);
	}
	template <typename T = bool> T CheckIsDisassembleWithFinalize() {
		return ((T (*)(FurnitureSelectView*))(Il2CppBase() + 0x1600ABC))(this);
	}

};

}
