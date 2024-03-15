#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FurnitureSelectView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FurnitureSelectView"));
	}

	template <typename R = uintptr_t> R& MoveButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RotateButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& TakeButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& DisassembleButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextMonoBehaviour*> R& WarningPanel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& OnStartMoveFurniture() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = BuilderWindow*> R& _builderWindow() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = GameEntity*> R& _selectedEntity() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _serviceDownTitleKey() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _cantMoveKey() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _cantPutKey() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _cantDisassembleKey() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R add_OnStartMoveFurniture(uintptr_t value) {
		return ((R (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF3D8))(this, value);
	}
	template <typename R = void> R remove_OnStartMoveFurniture(uintptr_t value) {
		return ((R (*)(FurnitureSelectView*, uintptr_t))(Il2CppBase() + 0x15FF478))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x15FF518))(this);
	}
	template <typename R = void> R Init(BuilderWindow* builderWindow) {
		return ((R (*)(FurnitureSelectView*, BuilderWindow*))(Il2CppBase() + 0x15FF6A4))(this, builderWindow);
	}
	template <typename R = void> R Show(GameEntity* selectedEntity) {
		return ((R (*)(FurnitureSelectView*, GameEntity*))(Il2CppBase() + 0x15FF6AC))(this, selectedEntity);
	}
	template <typename R = void> R TakeFurniture() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x15FF8D8))(this);
	}
	template <typename R = void> R DisassembleFurniture() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x160021C))(this);
	}
	template <typename R = void> R MoveFurniture() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x1600C84))(this);
	}
	template <typename R = void> R RotateFurniture() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x1601150))(this);
	}
	template <typename R = bool> R CheckIsDisassembleWithFinalize() {
		return ((R (*)(FurnitureSelectView*))(Il2CppBase() + 0x1600ABC))(this);
	}

};

