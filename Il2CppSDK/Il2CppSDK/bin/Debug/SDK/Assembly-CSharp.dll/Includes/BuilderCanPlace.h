#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderCanPlace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderCanPlace"));
	}

	template <typename R = PlacingView*> R& PlacingView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GameEntity*> R& _lastEntity() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1float>*& _x() {
		return *(Nullable1float>**)((uintptr_t)this + 0x28);
	}
	 Nullable1float>*& _y() {
		return *(Nullable1float>**)((uintptr_t)this + 0x30);
	}
	 Nullable1uint8_t>*& _orientition() {
		return *(Nullable1uint8_t>**)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _view() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& _move() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _canPlace() {
		return *(R*)((uintptr_t)this + 0x49);
	}
	template <typename R = GameDataEntity*> R& _buildEntity() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R ResetCache() {
		return ((R (*)(BuilderCanPlace*))(Il2CppBase() + 0x15A5090))(this);
	}
	template <typename R = bool> R UpdateCanPlace(GameEntity* ghost, GameDataEntity* buildEntity, BuilderWindow* builderWindow, bool move) {
		return ((R (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*, BuilderWindow*, bool))(Il2CppBase() + 0x15A50E8))(this, ghost, buildEntity, builderWindow, move);
	}
	 static ValueTuple2int32_t, int32_t>* GetPlacedCount(Il2CppString* blueprint, GameEntity* ghost) {
		return ((ValueTuple2int32_t, int32_t>* (*)(void *, Il2CppString*, GameEntity*))(Il2CppBase() + 0x15A5844))(0, blueprint, ghost);
	}
	template <typename R = bool> R CanPlace(GameEntity* ghost, GameDataEntity* buildEntity) {
		return ((R (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x15A6B14))(this, ghost, buildEntity);
	}
	template <typename R = bool> R CanPlaceOneInCell(GameDataEntity* buildEntity, GameEntity* other) {
		return ((R (*)(BuilderCanPlace*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A7040))(this, buildEntity, other);
	}
	template <typename R = bool> R CanPlaceOneInCellUpgrade(GameDataEntity* buildEntity, GameEntity* other) {
		return ((R (*)(BuilderCanPlace*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A71EC))(this, buildEntity, other);
	}
	template <typename R = bool> R CanPlaceBuild(GameEntity* ghost, GameDataEntity* buildEntity) {
		return ((R (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x15A5D94))(this, ghost, buildEntity);
	}

};

