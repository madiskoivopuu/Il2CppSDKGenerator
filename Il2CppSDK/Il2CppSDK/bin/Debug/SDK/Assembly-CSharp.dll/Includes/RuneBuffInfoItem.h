#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour" 

class RuneBuffInfoItem: TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneBuffInfoItem"));
	}

	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _moveDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _moveCurve() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _slotIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& _startPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& _endPoint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _moveCoroutine() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnMoveEnd() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(uintptr_t parameters) {
		return ((T (*)(RuneBuffInfoItem*, uintptr_t))(Il2CppBase() + 0x11A94AC))(this, parameters);
	}
	template <typename T = void> T Bind_1(uintptr_t parameters, int32_t slotIndex, Il2CppVector3 startPoint, Il2CppVector3 endPoint, uintptr_t onMoveEnd) {
		return ((T (*)(RuneBuffInfoItem*, uintptr_t, int32_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x11A8BD0))(this, parameters, slotIndex, startPoint, endPoint, onMoveEnd);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(RuneBuffInfoItem*, bool))(Il2CppBase() + 0x11A9564))(this, isActive);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A9908))(this);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A98B0))(this);
	}
	template <typename T = uintptr_t> T MoveCoroutine() {
		return ((T (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A996C))(this);
	}

};

}
