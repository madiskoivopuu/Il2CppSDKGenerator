#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPveWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPveWorld"));
	}

	 static MessageParser1<ProtoModels::MonitorPveWorld*>*& _parser() {
		return *(MessageParser1<ProtoModels::MonitorPveWorld*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountUsersOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countUsersOnline_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CountClanOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countClanOnline_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& CapUsersOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& capUsersOnline_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CapClanOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& capClanOnline_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& TimeEstimatedEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& timeEstimatedEnd_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MarkToDeleteFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& markToDelete_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LootProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lootProgress_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& LootMaxProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lootMaxProgress_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& TagIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& tagID_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& TagNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tagName_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& LevelsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& levels_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1<ProtoModels::MonitorPveWorld*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MonitorPveWorld*>* (*)(void *))(Il2CppBase() + 0x1EA5FF8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1EA605C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA617C))(this);
	}
	template <typename R = ProtoModels::MonitorPveWorld*> R Clone() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA62D8))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6334))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(MonitorPveWorld*, int64_t))(Il2CppBase() + 0x1EA633C))(this, value);
	}
	template <typename R = int32_t> R get_CountUsersOnline() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6344))(this);
	}
	template <typename R = void> R set_CountUsersOnline(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA634C))(this, value);
	}
	template <typename R = int32_t> R get_CountClanOnline() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6354))(this);
	}
	template <typename R = void> R set_CountClanOnline(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA635C))(this, value);
	}
	template <typename R = int32_t> R get_CapUsersOnline() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6364))(this);
	}
	template <typename R = void> R set_CapUsersOnline(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA636C))(this, value);
	}
	template <typename R = int32_t> R get_CapClanOnline() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6374))(this);
	}
	template <typename R = void> R set_CapClanOnline(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA637C))(this, value);
	}
	template <typename R = int64_t> R get_TimeEstimatedEnd() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6384))(this);
	}
	template <typename R = void> R set_TimeEstimatedEnd(int64_t value) {
		return ((R (*)(MonitorPveWorld*, int64_t))(Il2CppBase() + 0x1EA638C))(this, value);
	}
	template <typename R = bool> R get_MarkToDelete() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6394))(this);
	}
	template <typename R = void> R set_MarkToDelete(bool value) {
		return ((R (*)(MonitorPveWorld*, bool))(Il2CppBase() + 0x1EA639C))(this, value);
	}
	template <typename R = int32_t> R get_LootProgress() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63A8))(this);
	}
	template <typename R = void> R set_LootProgress(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63B0))(this, value);
	}
	template <typename R = int32_t> R get_LootMaxProgress() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63B8))(this);
	}
	template <typename R = void> R set_LootMaxProgress(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63C0))(this, value);
	}
	template <typename R = int32_t> R get_TagID() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63C8))(this);
	}
	template <typename R = void> R set_TagID(int32_t value) {
		return ((R (*)(MonitorPveWorld*, int32_t))(Il2CppBase() + 0x1EA63D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_TagName() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA63D8))(this);
	}
	template <typename R = void> R set_TagName(Il2CppString* value) {
		return ((R (*)(MonitorPveWorld*, Il2CppString*))(Il2CppBase() + 0x1EA63E0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Levels() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6460))(this);
	}
	template <typename R = void> R set_Levels(Il2CppString* value) {
		return ((R (*)(MonitorPveWorld*, Il2CppString*))(Il2CppBase() + 0x1EA6468))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MonitorPveWorld*, Il2CppObject*))(Il2CppBase() + 0x1EA64E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MonitorPveWorld* other) {
		return ((R (*)(MonitorPveWorld*, ProtoModels::MonitorPveWorld*))(Il2CppBase() + 0x1EA6558))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6670))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA680C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MonitorPveWorld*, uintptr_t))(Il2CppBase() + 0x1EA6870))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MonitorPveWorld*))(Il2CppBase() + 0x1EA6ABC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MonitorPveWorld* other) {
		return ((R (*)(MonitorPveWorld*, ProtoModels::MonitorPveWorld*))(Il2CppBase() + 0x1EA6DC0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MonitorPveWorld*, uintptr_t))(Il2CppBase() + 0x1EA6E98))(this, input);
	}

};

}
