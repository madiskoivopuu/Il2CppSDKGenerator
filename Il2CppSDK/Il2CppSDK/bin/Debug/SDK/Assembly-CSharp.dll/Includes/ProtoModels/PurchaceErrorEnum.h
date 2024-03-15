#pragma once
namespace ProtoModels {

class PurchaceErrorEnum
{

	Ok = 0,
	AlreadyProcessed = 1,
	ValidationError = 2,
	DataBaseError = 3,
	UserError = 4,
	UserNotFound = 5,
	PurchaseRerceiptEmpty = 6,
	InvalidPayloadData = 7,
	InProcessWait = 8,
	UserBalanceIsEmpty = 9,
	PeuUnknown = 100

};

}
