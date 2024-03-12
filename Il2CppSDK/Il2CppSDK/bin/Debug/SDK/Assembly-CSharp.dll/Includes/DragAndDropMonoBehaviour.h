#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragAndDropMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragAndDropMonoBehaviour"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onBeginDrag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& onDrag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onEndDrag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onDrop() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onPointerDown() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnClickHolded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& onDoubleClick() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _clicked() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _clickDuration() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _clickDelay() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void*> T get_OnClickHolded() {
		return ((T (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x1304EE8))(this);
	}
	template <typename T = void> T set_OnClickHolded(void* value) {
		return ((T (*)(DragAndDropMonoBehaviour*, void*))(Il2CppBase() + 0x1304EF0))(this, value);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1304EF8))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1304FA0))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1305014))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x1305088))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x13050FC))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(DragAndDropMonoBehaviour*, uintptr_t))(Il2CppBase() + 0x130516C))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x13051EC))(this);
	}
	template <typename T = bool> T IsDoubleClick() {
		return ((T (*)(DragAndDropMonoBehaviour*))(Il2CppBase() + 0x13052B4))(this);
	}

};

}
