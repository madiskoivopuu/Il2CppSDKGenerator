#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogOfWar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogOfWar"));
	}

	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _fows() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _fowGOs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsDirty() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = IGroup1GameEntity*>*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F7DFC))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F7E04))(this);
	}
	template <typename T = DoorsAndWalls*> T get__doorsAndWalls() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F7E0C))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F7E30))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(FogOfWar*, bool))(Il2CppBase() + 0x15F7E38))(this, value);
	}
	template <typename T = void> T Fill(Queue1Coord*>* next) {
		return ((T (*)(FogOfWar*, Queue1Coord*>*))(Il2CppBase() + 0x15F83C4))(this, next);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F90D0))(this);
	}
	template <typename T = Nullable1bool>*> T IsVisible(GameEntity* entity) {
		return ((T (*)(FogOfWar*, GameEntity*))(Il2CppBase() + 0x15F92B8))(this, entity);
	}
	template <typename T = void> T SetVisible(GameEntity* entity) {
		return ((T (*)(FogOfWar*, GameEntity*))(Il2CppBase() + 0x15F8FA4))(this, entity);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(FogOfWar*))(Il2CppBase() + 0x15F9778))(this);
	}

};

