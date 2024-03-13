#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderCanPlace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderCanPlace"));
	}

	template <typename T = PlacingView*> T& PlacingView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = GameEntity*> T& _lastEntity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& _x() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Nullable1float>*> T& _y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1uint8_t>*> T& _orientition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _move() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _canPlace() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = GameDataEntity*> T& _buildEntity() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T ResetCache() {
		return ((T (*)(BuilderCanPlace*))(Il2CppBase() + 0x15A5090))(this);
	}
	template <typename T = bool> T UpdateCanPlace(GameEntity* ghost, GameDataEntity* buildEntity, BuilderWindow* builderWindow, bool move) {
		return ((T (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*, BuilderWindow*, bool))(Il2CppBase() + 0x15A50E8))(this, ghost, buildEntity, builderWindow, move);
	}
	template <typename T = ValueTuple2int32_t, int32_t>*> static T GetPlacedCount(Il2CppString* blueprint, GameEntity* ghost) {
		return ((T (*)(void *, Il2CppString*, GameEntity*))(Il2CppBase() + 0x15A5844))(0, blueprint, ghost);
	}
	template <typename T = bool> T CanPlace(GameEntity* ghost, GameDataEntity* buildEntity) {
		return ((T (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x15A6B14))(this, ghost, buildEntity);
	}
	template <typename T = bool> T CanPlaceOneInCell(GameDataEntity* buildEntity, GameEntity* other) {
		return ((T (*)(BuilderCanPlace*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A7040))(this, buildEntity, other);
	}
	template <typename T = bool> T CanPlaceOneInCellUpgrade(GameDataEntity* buildEntity, GameEntity* other) {
		return ((T (*)(BuilderCanPlace*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A71EC))(this, buildEntity, other);
	}
	template <typename T = bool> T CanPlaceBuild(GameEntity* ghost, GameDataEntity* buildEntity) {
		return ((T (*)(BuilderCanPlace*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x15A5D94))(this, ghost, buildEntity);
	}

};

