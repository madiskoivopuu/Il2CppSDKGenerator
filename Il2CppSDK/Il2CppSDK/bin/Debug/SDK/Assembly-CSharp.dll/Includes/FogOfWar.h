#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogOfWar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogOfWar"));
	}

	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _fows() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _fowGOs() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsDirty() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& Active() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = int32_t> R get_Width() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F7DFC))(this);
	}
	template <typename R = int32_t> R get_Height() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F7E04))(this);
	}
	template <typename R = DoorsAndWalls*> R get__doorsAndWalls() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F7E0C))(this);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F7E30))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(FogOfWar*, bool))(Il2CppBase() + 0x15F7E38))(this, value);
	}
	template <typename R = void> R Fill(Queue1Coord*>* next) {
		return ((R (*)(FogOfWar*, Queue1Coord*>*))(Il2CppBase() + 0x15F83C4))(this, next);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F90D0))(this);
	}
	 Nullable1bool>* IsVisible(GameEntity* entity) {
		return ((Nullable1bool>* (*)(FogOfWar*, GameEntity*))(Il2CppBase() + 0x15F92B8))(this, entity);
	}
	template <typename R = void> R SetVisible(GameEntity* entity) {
		return ((R (*)(FogOfWar*, GameEntity*))(Il2CppBase() + 0x15F8FA4))(this, entity);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(FogOfWar*))(Il2CppBase() + 0x15F9778))(this);
	}

};

