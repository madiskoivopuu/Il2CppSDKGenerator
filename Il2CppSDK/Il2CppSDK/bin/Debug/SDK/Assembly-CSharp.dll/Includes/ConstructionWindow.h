#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ConstructionWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConstructionWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& StableIcon() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& TreeIcon() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ContainerIcon() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = PrerequisiteContainer*> T& ConstructObject() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& FinalizeButton() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ConstructedImage() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& _sendFinalize() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(ConstructionWindow*))(Il2CppBase() + 0x15E980C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ConstructionWindow*))(Il2CppBase() + 0x15E9B08))(this);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(ConstructionWindow*, IInventoryItem*))(Il2CppBase() + 0x15E9F9C))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ConstructionWindow*))(Il2CppBase() + 0x15EA470))(this);
	}
	template <typename T = void> T OnFinalizeClick() {
		return ((T (*)(ConstructionWindow*))(Il2CppBase() + 0x15EA6D8))(this);
	}
	template <typename T = void> T OnFinalizeResult(FinalizeResultData* data) {
		return ((T (*)(ConstructionWindow*, FinalizeResultData*))(Il2CppBase() + 0x15EAD80))(this, data);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ConstructionWindow*, float))(Il2CppBase() + 0x15EAED4))(this, deltaTime);
	}
	template <typename T = bool> T CanFinalize(GameEntity* target) {
		return ((T (*)(ConstructionWindow*, GameEntity*))(Il2CppBase() + 0x15EAB0C))(this, target);
	}

};

